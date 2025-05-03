// props -> read only properties that share between two components.
//             A parent component can send data to Children..
//             <component key = value/>

import Child from "./Child";

const Parent = () => {
    return (
        <div>
            <h1>Props,propTypes,defaultProps</h1>
            <Child name="Earshad" age={38} isElder={true}/>
            <Child name="Amjad" age={22} isElder={false}/>
            <Child name="Aklima"/>
        </div>
    );
};

export default Parent;