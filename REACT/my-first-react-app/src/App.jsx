import Food from "./Food"
import Footer from "./Footer"
import Header from "./Header"
import Card from "./Card"
import Button from "./AddStyleCss/Button"
import Parent from "./Props/Parent"
import ParentGreetings from "./conditionRender/ParentGreetings"
import ListParent from "./Render List/ListParent"
import ClickEvent from "./Click Events/ClickEvent"
import UseStateHook from "./UseState/UseStateHook"
import ColorPickerApp from "./ColorPickerApp/ColorPickerApp"
import OnChangeEvent from "./OnchangeEvent/OnChangeEvent"
import UpdateObject from "./Update Object In State/UpdateObject"
import UpdateArray from "./UpdateArray/UpdateArray"
import UpdateArrayOfObject from "./UpdateArrayOfObject/UpdateArrayOfObject"

function App() {
  

  return (
    <>
      <Header/>
      <Food/>
      <Card/>
      <Card/>
      <Button/>
      <Parent/>
      <ParentGreetings/>
      <ListParent/>
      <ClickEvent/>
      <UseStateHook/>
      <OnChangeEvent/>
      <ColorPickerApp/>
      <UpdateObject/>
      <UpdateArray/>
      <UpdateArrayOfObject/>
      <Footer/>
    </>
  )
}

export default App
