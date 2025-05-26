import React, { useRef } from 'react';

// useRef() is a Hook in React that allows you to create a mutable reference that persists across renders. It’s commonly used for:
// Accessing DOM elements (like document.getElementById, but in React way).
// Storing values that do not trigger re-renders when updated.

const UseRef = () => {
    const myNameRef = useRef()
    const handleChange = () => {
        myNameRef.current.innerText = "Yes,I am here"
        myNameRef.current.classList.add("font-bold")
    }
    return (
        <div>
            <h1 className='text-2xl font-bold underline'>UseRef Hook</h1>
            <div>
                <h1 ref={myNameRef}>Hello</h1>
                <button onClick={handleChange} className='p-2 bg-blue-500 m-2'>Click me</button>
            </div>
        </div>
    );
};

export default UseRef;