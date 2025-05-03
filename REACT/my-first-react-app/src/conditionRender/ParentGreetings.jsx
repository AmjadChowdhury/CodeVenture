import ChildGreetings1 from "./ChildGreetings1";
import ChildGreetings2 from "./ChildGreetings2";


const ParentGreetings = () => {
    return (
        <div>
            <h1>Conditional rendering</h1>
            <ChildGreetings1 isLog={true} userName = "Amjad"/>
            <ChildGreetings1 isLog={false} userName = "Amjad"/>
            <ChildGreetings2 isLog={true} userName="Esha"/>
            <ChildGreetings2 isLog={false} userName="Esha"/>
        </div>
    );
};

export default ParentGreetings;