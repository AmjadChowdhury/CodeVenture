import React, { useState } from 'react';

const UseStateHook = () => {
    const [age,setAge] = useState(0)
    const handleInc = () => {
        setAge(age + 1);
    }
    const handleDec = () => {
        setAge(age - 1);
    }
    const handleIRes = () => {
        setAge(0);
    }
    return (
        <div>
            <h1>This is useState ...</h1>
            <div>
                <h1>Age : <span className='font-bold text-xl'>{age}</span></h1>
                <button onClick={handleInc} className='bg-blue-500 p-2 m-2 rounded-lg text-white font-bold'>Increment</button>
                <button onClick={handleDec} className='bg-blue-500 p-2 m-2 rounded-lg text-white font-bold'>Decrement</button>
                <button onClick={handleIRes} className='bg-blue-500 p-2 m-2 rounded-lg text-white font-bold'>Reset</button>
            </div>
        </div>
    );
};

export default UseStateHook;