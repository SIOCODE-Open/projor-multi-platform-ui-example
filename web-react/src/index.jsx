import { createRoot } from "react-dom/client";
import {
    useState,
    useEffect,
    useRef
} from "react";
import { ProductListPage } from "./pages/product-list-page.page";
import { ProductDetailPage } from "./pages/product-detail-page.page";

function MainMenu(props) {
    return <div className="flex items-center justify-center w-screen h-screen">
        <div className="h-96 rounded-lg p-4 border-gray-100 border-2">
            <h1 className="text-4xl font-bold">Main menu</h1>
            <p className="text-normal">
                Navigate to a different page by clicking one of the buttons below.
            </p>
            <div className="flex flex-col justify-start items-center overflow-y-auto h-64 p-4">
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("ProductListPage");
                } }>
                    Product List Page
                </button>
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("ProductDetailPage");
                } }>
                    Product Detail Page
                </button>
            </div>
        </div>
    </div>
}

const routes = [
    {
        path: "MainMenu",
        component: MainMenu
    },
    {
        path: "ProductListPage",
        component: ProductListPage
    },
    {
        path: "ProductDetailPage",
        component: ProductDetailPage
    },
];

function App() {
    const [currentRoutePath, setCurrentRoutePath] = useState("MainMenu");
    const currentRouteComponentRef = useRef(MainMenu);

    const onNavigate = (newPath) => {
        const newRoute = routes.find(route => route.path === newPath);
        if(newRoute) {
            setCurrentRoutePath(newPath);
            currentRouteComponentRef.current = newRoute.component;
        }
    }

    return <>
        {
            currentRouteComponentRef.current({
                onNavigate: onNavigate
            })
        }
    </>
}

const rootEl = document.getElementById("root");
const root = createRoot(rootEl);
root.render(<App />);