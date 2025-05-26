import React, { useEffect, useState } from 'react';
import './DigitalClock.css'

const DigitalClock = () => {
    const [time,setTime] = useState(new Date())

    useEffect(() => {
        const intervalId = setInterval(() => {
            setTime(new Date())
        },1000)

        return () => {
            clearInterval(intervalId)
        }
    },[])

    function formatTime(){
        let hours = time.getHours();
        const minutes = time.getMinutes();
        const seconds = time.getSeconds();
        const meridiem = hours > 12 ? "P.M." : "A.M.";
        hours = hours % 12 || 12

        return `${padZero(hours)}:${padZero(minutes)}:${padZero(seconds)} ${meridiem}`
    }

    function padZero(number){
        return (number > 9 ? "" : "0") + number
    }
    return (
        <div>
            <h1 className='text-2xl font-bold underline'>Digital Clock App</h1>
            <div className='backdrop-blur-lg shadow-lg w-full flex justify-center p-3'>
                <span className='text-4xl font-bold font-mono'>{formatTime()}</span>
            </div>
        </div>
    );
};

export default DigitalClock;