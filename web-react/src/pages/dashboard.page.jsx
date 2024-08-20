import {
    useEffect,
    useState,
    useRef
} from "react";

/** The main dashboard providing an overview of warehouse operations */
export function Dashboard(
    props
) {
    return <div className="flex items-center justify-center w-screen h-screen">
        <div className="rounded-lg p-4 border-gray-100 border-2">
            <h1 className="text-4xl font-bold">Dashboard</h1>
            <p className="text-normal">
                The main dashboard providing an overview of warehouse operations
            </p>
            <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                if(props.onNavigate) props.onNavigate("MainMenu");
            }}>Back</button>
        </div>
    </div>;
}