import ListChild from "./ListChild";


const ListParent = () => {
    return (
        <div>
            <h1 className="text-2xl font-bold underline">Render List</h1>
            <ListChild/>
        </div>
    );
};

export default ListParent;