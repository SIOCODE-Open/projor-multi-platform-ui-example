import {
    useEffect,
    useState,
    useRef
} from "react";

/** The page where new inventory items can be added */
export function AddInventoryItemPage(
    props
) {
    return <div className="flex items-center justify-center w-screen h-screen">
        <div className="rounded-lg p-4 border-gray-100 border-2">
            <h1 className="text-4xl font-bold">Add Inventory Item Page</h1>
            <p className="text-normal">
                The page where new inventory items can be added
            </p>
            <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                if(props.onNavigate) props.onNavigate("MainMenu");
            }}>Back</button>
        </div>
    </div>;
}