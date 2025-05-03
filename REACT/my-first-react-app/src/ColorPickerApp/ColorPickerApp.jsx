import React, { useState } from 'react';

const ColorPickerApp = () => {
    const [color,setColor] = useState("#FFFFFF")

    const handleColor = (event) => {
        setColor(event.target.value)
    }
    return (
        <div>
            <h1 className='text-2xl font-bold underline'>Color Picker App</h1>
            <div className='flex flex-col justify-center items-center'>
                <div className='w-1/3 h-40 text-center flex items-center justify-center text-2xl font-bold' style={{backgroundColor: color}}>Color : {color}</div>
                <h1>Choose color</h1>
                <input type="color" value={color} onChange={handleColor}/>
            </div>
        </div>
    );
};

export default ColorPickerApp;