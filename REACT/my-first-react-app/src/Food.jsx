

const Food = () => {
    const food1 = 'banana';
    const food2 = 'Mango';
    return (
        <div>
            <h1>Food Item</h1>
            <ul>
                <li>Apple</li>
                <li>{food1}</li>
                <li>{food2.toUpperCase()}</li>
            </ul>
        </div>
    );
};

export default Food;