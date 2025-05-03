import React from 'react';

const ClickEvent = () => {
    const handleClick = () => {
        console.log("OUCH!")
    }
    const handleClick2 = (e) => {
        console.log(e)
        e.target.innerText = "OUCH!"
    }
    const handleClick3 = (e) => {
        console.log(e)
        e.target.innerText = "hello!"
    }
    return (
        <div>
            <h1>This is click event.</h1>
            <button onClick={handleClick} className='bg-blue-500 text-white m-2 p-2 rounded-lg text-lg'>Click Me</button>
            <button onClick={(e) => handleClick2(e)} className='bg-blue-500 text-white m-2 p-2 rounded-lg text-lg'>Click Me</button>
            <button onDoubleClick={(e) => handleClick3(e)} className='bg-blue-500 text-white m-2 p-2 rounded-lg text-lg'>Click Me</button>
        </div>
    );
};

export default ClickEvent;