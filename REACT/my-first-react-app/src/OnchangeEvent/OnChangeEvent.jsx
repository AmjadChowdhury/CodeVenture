import React, { useState } from 'react';

const OnChangeEvent = () => {
    const [name,setName] = useState("")
    const [shipping,setShipping] = useState("")


    const handleName = (event) => {
        setName(event.target.value)
    }
    const handleShipping = (event) => {
        setShipping(event.target.value)
    }
    return (
        <div>
            <h1 className='text-2xl font-bold underline'>This is onChange Event Handler</h1>
            <div>
                <h1>Name : {name}</h1>
                <input type="text"  onChange={handleName} className='border-2 border-black'/>

                <h1>Shipping : {shipping}</h1>
                <label >
                    <input type="radio" value="Pick Up" checked={shipping === "Pick Up"} onChange={handleShipping} />
                    Pick Up
                </label>
                <label >
                    <input type="radio" value="Delivery" checked={shipping === "Delivery"} onChange={handleShipping} />
                    Delivery
                </label>
            </div>
        </div>
    );
};

export default OnChangeEvent;