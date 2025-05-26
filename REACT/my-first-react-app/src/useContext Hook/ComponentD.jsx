import React, { useContext } from 'react';
import { UserContext } from './ComponentA';

const ComponentD = () => {
    const user = useContext(UserContext)
    return (
        <div className='border-2 border-black p-4 m-2'>
            <h1>Component D</h1>
            <h1>By context,we found user name is {user} without drilling</h1>
        </div>
    );
};

export default ComponentD;