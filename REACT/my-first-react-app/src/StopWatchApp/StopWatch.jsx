import React, { useEffect, useRef, useState } from 'react';

const StopWatch = () => {
    const [isRunning,setisRunning] = useState(false)
    const [elapsedTime,setElapsedTime] = useState(0)
    const intervalIdRef = useRef(null)
    const startTimeRef = useRef(0)

    useEffect(() => {
        if(isRunning){
            intervalIdRef.current = setInterval(() => {
                setElapsedTime(Date.now() - startTimeRef.current)
            },10)
        }

        return () => {
            clearInterval(intervalIdRef.current)
        }

    },[isRunning])

    function start(){
        setisRunning(true)
        startTimeRef.current = Date.now() - elapsedTime

    }

    function stop(){
        setisRunning(false)
    }
    function reset(){
        setElapsedTime(0)
        setisRunning(false)

    }

    function formatTime(){
        // let hours = Math.floor(elapsedTime/(1000 * 60 * 60))
        let minutes = Math.floor(elapsedTime/(1000 * 60) % 60)
        let seconds = Math.floor(elapsedTime/(1000) % 60)
        let miliSeconds = Math.floor((elapsedTime % 1000) / 10)

        // hours = String(hours).padStart(2,"0")
        minutes = String(minutes).padStart(2,"0")
        seconds = String(seconds).padStart(2,"0")
        return `${minutes}:${seconds}:${miliSeconds}`
    }
    return (
        <div>
            <h1 className='text-2xl font-bold underline'>StopWatch App</h1>
            <div className='border-2 w-2/3 lg:1/3 m-auto p-8 rounded-full'>
                <div className='flex justify-center'>
                    <span className='font-bold font-mono text-4xl'>{formatTime()}</span>
                </div>
                <div className='flex justify-center gap-2'>
                    <button onClick={start} className='p-2 bg-green-500 text-white rounded-lg text-center font-semibold font-mono'>Start</button>
                    <button onClick={stop} className='p-2 bg-red-500 text-white rounded-lg text-center font-semibold font-mono'>Stop</button>
                    <button onClick={reset} className='p-2 bg-blue-500 text-white rounded-lg text-center font-semibold font-mono'>Reset</button>
                </div>
            </div>
        </div>
    );
};

export default StopWatch;