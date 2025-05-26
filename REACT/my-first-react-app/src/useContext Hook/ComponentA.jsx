import React, { createContext } from 'react';
import ComponentB from './ComponentB';

/*
useContext() -> React hook that allows to share values between multiple levels of components without passing props through each level...


Provider component..
1.import {createContext} from 'react'
2.export const Usercontext = createContext()
3.<UserContext.Provider value={user}>
    <ComponentB/>
  </UserContext.Provider>

//Consumer components
1. import React, { useContext } from 'react';
   import { UserContext } from './ComponentA';
2. const user = useContext(UserContext)
 */


export const UserContext = createContext()

const ComponentA = () => {
    const user = "Amjad"
    return (
        <div className='border-2 border-black p-4 m-2'>
            <h1>Component A</h1>
            <UserContext.Provider value={user}>
               <ComponentB/>
            </UserContext.Provider>
        </div>
    );
};

export default ComponentA;