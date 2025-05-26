import React from 'react';
import ComponentD from './ComponentD';

const ComponentC = () => {
    return (
        <div className='border-2 border-black p-4 m-2'>
            <h1>Component C</h1>
            <ComponentD/>
        </div>
    );
};

export default ComponentC;