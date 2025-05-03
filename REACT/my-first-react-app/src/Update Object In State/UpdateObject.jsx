import React, { useState } from 'react';

// setCar({ ...car, year: 2025 });       // 1st update
// setCar({ ...car, make: "Tesla" });    // 2nd update
// 1st update becomes: { year: 2025, make: "Ford", model: "Mustang" }

// 2nd update becomes: { year: 2024, make: "Tesla", model: "Mustang" } ← ❗Oops! It overwrites the first one

// Result: Only the last update survives, and the change to year is lost.



// ✅ Correct Way: Use Functional Updates
// setCar(prev => ({ ...prev, year: 2025 }));
// setCar(prev => ({ ...prev, make: "Tesla" }));

const UpdateObject = () => {
    const [car,setCar] = useState({year: 2024,make: "Forg",model: "Mustang"})

    const handleYearChange = (event) => {
        setCar(c => ({...c,year: event.target.value}))
        // The functional form (c => { ... }) always uses the latest state value, even if React has batched updates or re-rendered.
    }
    const handleMakeChange = (event) => {
        setCar(c => ({...c,make: event.target.value}))
    }
    const handleModelChange = (event) => {
        setCar(c => ({...c,model: event.target.value}))
    }
    return (
        <div>
            <h1 className='text-2xl font-bold underline'>Update Object In State</h1>
            <div>
                <p>Car Info : {car.year} {car.make} {car.model}</p>
                <input type="number" value={car.year} onChange={handleYearChange}  className='border-2 border-black m-2'/><br />
                <input type="text" value={car.make} onChange={handleMakeChange}  className='border-2 border-black m-2'/><br />
                <input type="text" value={car.model} onChange={handleModelChange} className='border-2 border-black m-2' /><br />
            </div>
        </div>
    );
};

export default UpdateObject;