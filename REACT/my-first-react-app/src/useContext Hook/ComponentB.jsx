import React from 'react';
import ComponentC from './ComponentC';

const ComponentB = () => {
    return (
        <div className='border-2 border-black p-4 m-2'>
            <h1>Component B</h1>
            <ComponentC/>
        </div>
    );
};

export default ComponentB;