

const ListChild = () => {
    const fruits = [{id: 1,name: "Apple",calories: 45},
        {id: 2,name: "Mango",calories: 145},
        {id: 3,name: "banana",calories: 425},
        {id: 4,name: "Pineapple",calories: 75},
        {id: 5,name: "nashpotu",calories: 100},
        {id: 6,name: "Angur",calories: 65},
    ]

    // fruits.sort((a,b)=> a.name.localeCompare(b.name))
    // case-insensitive alphabetical sort

    // fruits.sort((a,b) => a.calories - b.calories)
    // numerical ascending

    // fruits.sort((a,b) => b.calories - a.calories)
    // numerical descending
    const fruitsItem = fruits.map(fruit => <li key={fruit.id}>
        <h3>{fruit.name} : {fruit.calories}</h3>
    </li>)

    const lowCalFruits = fruits.filter(fruit => fruit.calories < 100)
    const lowCalFruitsItem = lowCalFruits.map(fruit => <li key={fruit.id}>
        <h3>{fruit.name} : {fruit.calories}</h3>
    </li>)
    return (
        <div>
            <ul>{fruitsItem}</ul>
            <h4>Low Calories</h4>
            <ul>{lowCalFruitsItem}</ul>
        </div>
    );
};

export default ListChild;