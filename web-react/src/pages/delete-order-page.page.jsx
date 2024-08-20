import {
    useEffect,
    useState,
    useRef
} from "react";

/** The page for deleting a customer order */
export function DeleteOrderPage(
    props
) {
    return <div className="flex items-center justify-center w-screen h-screen">
        <div className="rounded-lg p-4 border-gray-100 border-2">
            <h1 className="text-4xl font-bold">Delete Order Page</h1>
            <p className="text-normal">
                The page for deleting a customer order
            </p>
            <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                if(props.onNavigate) props.onNavigate("MainMenu");
            }}>Back</button>
        </div>
    </div>;
}