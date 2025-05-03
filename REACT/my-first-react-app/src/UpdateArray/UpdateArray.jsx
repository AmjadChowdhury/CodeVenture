import { useState } from "react";


const UpdateArray = () => {
    const [foods,setFoods] = useState(["Apple","Banana","Mango"])

    const handleAddFood = () => {
        const newFood = document.getElementById("newFood").value
        document.getElementById("newFood").value = "" 
        setFoods(f => ([...f,newFood]))
    }

    const handleDeleteFood = (index) => {
        setFoods(f => f.filter((_,i) => i !== index))
    }
    return (
        <div>
            <h1 className="text-2xl font-bold underline">Update Array in state</h1>
            <div>
                <ul>
                    {
                        foods.map((food,index) => <li key={index} onClick={()=> handleDeleteFood(index)}>
                            {food}
                        </li>)
                    }
                </ul>
                <input type="text" id="newFood" className="border-2 border-black m-2" /><br />
                <button className="bg-blue-500 p-2 m-2 text-white" onClick={handleAddFood}>Add food</button>
            </div>
        </div>
    );
};

export default UpdateArray;