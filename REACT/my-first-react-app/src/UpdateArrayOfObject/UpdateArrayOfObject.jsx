import React, { useState } from 'react';

const UpdateArrayOfObject = () => {
    const [cars,setCars] = useState([])
    const [year,setYear] = useState(new Date().getFullYear())
    const [make,setMake] = useState("")
    const [model,setModel] = useState("")

    const handleAddCar = () => {
        const newCar = {year: year,make: make,model: model};
        setCars(c => ([...c,newCar]))

        setYear(new Date().getFullYear())
        setMake("")
        setModel("")

        document.getElementById("year").value = new Date().getFullYear()
        document.getElementById("make").value = ""
        document.getElementById("model").value = ""
    }
    const handleRemoveCar = (index) => {
        setCars(c => c.filter((_,i) => i !== index))
    }
    const handleYearChange = (event) => {
        setYear(event.target.value)
    }
    const handleMakeChange = (event) => {
        setMake(event.target.value)
    }
    const handleModelChange = (event) => {
        setModel(event.target.value)
    }

    return (
        <div>
            <h1 className='text-2xl font-bold underline'>Update Array Of Object</h1>
            <div>
                <h1 className='text-xl'>car List : </h1>
                <ul>
                    {
                        cars.map((car,index) => <li key={index} onClick={() => handleRemoveCar(index)}>
                            {car.year} {car.make} {car.model}
                        </li>)
                    }
                </ul>
                <input type="number" name="" id="year" className='border-2 border-black m-2 p-2' placeholder={year} onChange={handleYearChange}/><br />
                <input type="text" name="" id="make" className='border-2 border-black m-2 p-2' placeholder="car make" onChange={handleMakeChange}/><br />
                <input type="text" name="" id="model" className='border-2 border-black m-2 p-2' placeholder="Car Model" onChange={handleModelChange} /><br />
                <button onClick={handleAddCar} className='bg-blue-500 text-white rounded-lg m-2 p-2'>Add Car</button>
            </div>
        </div>
    );
};

export default UpdateArrayOfObject;