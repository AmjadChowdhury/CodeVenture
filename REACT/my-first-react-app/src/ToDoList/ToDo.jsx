import React, { useState } from 'react';

const ToDo = () => {
    const [tasks,setTasks] = useState(["Read","Ghum"])
    const [newTask,setNewTask] = useState("")

    const handleNewtask = (event) => {
        setNewTask(event.target.value)
    }

    const handleAddTask = () => {
        // The .trim() method in JavaScript removes whitespace from both ends of a string. This includes spaces, tabs, and newline characters.
        if(newTask.trim() != "")
        {
            const updatedTask = [...tasks,newTask]
            setTasks(updatedTask)
        }
    }
    const handleDeleteTask = (index) => {
        setTasks(t => t.filter((_,i) => i != index))
    }

    const handelUpTask = (index) => {
        if(index > 0){
            const updatedTask = [...tasks];
            [updatedTask[index],updatedTask[index-1]] = 
            [updatedTask[index-1],updatedTask[index]]
            setTasks(updatedTask)
        }
    }

    const handelDownTask = (index) => {
        if(index < tasks.length-1){
            const updatedTask = [...tasks];
            [updatedTask[index],updatedTask[index+1]] = 
            [updatedTask[index+1],updatedTask[index]]
            setTasks(updatedTask)
        }
    }
    return (
        <div>
            <h1 className='text-2xl font-bold underline'>To Do List : </h1>
            <div>
                <input type="text" onChange={handleNewtask} name="" id="" className='border-2 border-black p-2' />
                <button onClick={handleAddTask} className='bg-green-500 p-2 ml-2 text-white rounded-lg'>Add Task</button>
                <ol>
                    {
                        tasks.map((task,index) => <li 
                                                     key={index}
                                                     className='border-2 m-2 bg-gray-100 p-2 w-1/3'>
                            <span className='text-xl font-semibold'>{task}</span>
                            <button onClick={() => handleDeleteTask(index)} className='bg-red-500 p-2 text-white rounded-lg ml-2'>Delete</button>
                            <button onClick={() => handelUpTask(index)} className='bg-blue-500 p-2 text-white rounded-lg ml-2'>Up</button>
                            <button onClick={() => handelDownTask(index)} className='bg-blue-500 p-2 text-white rounded-lg ml-2'>Down</button>
                        </li>)
                    }
                </ol>
            </div>
        </div>
    );
};

export default ToDo;