import { createRoot } from "react-dom/client";
import {
    useState,
    useEffect,
    useRef
} from "react";
import { Dashboard } from "./pages/dashboard.page";
import { InventoryListPage } from "./pages/inventory-list-page.page";
import { InventoryDetailPage } from "./pages/inventory-detail-page.page";
import { AddInventoryItemPage } from "./pages/add-inventory-item-page.page";
import { EditInventoryItemPage } from "./pages/edit-inventory-item-page.page";
import { DeleteInventoryItemPage } from "./pages/delete-inventory-item-page.page";
import { OrderListPage } from "./pages/order-list-page.page";
import { OrderDetailPage } from "./pages/order-detail-page.page";
import { AddOrderPage } from "./pages/add-order-page.page";
import { EditOrderPage } from "./pages/edit-order-page.page";
import { DeleteOrderPage } from "./pages/delete-order-page.page";
import { SupplierListPage } from "./pages/supplier-list-page.page";
import { SupplierDetailPage } from "./pages/supplier-detail-page.page";
import { AddSupplierPage } from "./pages/add-supplier-page.page";
import { EditSupplierPage } from "./pages/edit-supplier-page.page";
import { DeleteSupplierPage } from "./pages/delete-supplier-page.page";
import { ShipmentListPage } from "./pages/shipment-list-page.page";
import { ShipmentDetailPage } from "./pages/shipment-detail-page.page";
import { AddShipmentPage } from "./pages/add-shipment-page.page";
import { EditShipmentPage } from "./pages/edit-shipment-page.page";
import { DeleteShipmentPage } from "./pages/delete-shipment-page.page";
import { StocktakingListPage } from "./pages/stocktaking-list-page.page";
import { StocktakingDetailPage } from "./pages/stocktaking-detail-page.page";
import { AddStocktakingPage } from "./pages/add-stocktaking-page.page";
import { EditStocktakingPage } from "./pages/edit-stocktaking-page.page";
import { DeleteStocktakingPage } from "./pages/delete-stocktaking-page.page";

function MainMenu(props) {
    return <div className="flex items-center justify-center w-screen h-screen">
        <div className="h-96 rounded-lg p-4 border-gray-100 border-2">
            <h1 className="text-4xl font-bold">Main menu</h1>
            <p className="text-normal">
                Navigate to a different page by clicking one of the buttons below.
            </p>
            <div className="flex flex-col justify-start items-center overflow-y-auto h-64 p-4">
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("Dashboard");
                } }>
                    Dashboard
                </button>
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("InventoryListPage");
                } }>
                    Inventory List Page
                </button>
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("InventoryDetailPage");
                } }>
                    Inventory Detail Page
                </button>
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("AddInventoryItemPage");
                } }>
                    Add Inventory Item Page
                </button>
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("EditInventoryItemPage");
                } }>
                    Edit Inventory Item Page
                </button>
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("DeleteInventoryItemPage");
                } }>
                    Delete Inventory Item Page
                </button>
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("OrderListPage");
                } }>
                    Order List Page
                </button>
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("OrderDetailPage");
                } }>
                    Order Detail Page
                </button>
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("AddOrderPage");
                } }>
                    Add Order Page
                </button>
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("EditOrderPage");
                } }>
                    Edit Order Page
                </button>
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("DeleteOrderPage");
                } }>
                    Delete Order Page
                </button>
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("SupplierListPage");
                } }>
                    Supplier List Page
                </button>
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("SupplierDetailPage");
                } }>
                    Supplier Detail Page
                </button>
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("AddSupplierPage");
                } }>
                    Add Supplier Page
                </button>
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("EditSupplierPage");
                } }>
                    Edit Supplier Page
                </button>
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("DeleteSupplierPage");
                } }>
                    Delete Supplier Page
                </button>
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("ShipmentListPage");
                } }>
                    Shipment List Page
                </button>
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("ShipmentDetailPage");
                } }>
                    Shipment Detail Page
                </button>
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("AddShipmentPage");
                } }>
                    Add Shipment Page
                </button>
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("EditShipmentPage");
                } }>
                    Edit Shipment Page
                </button>
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("DeleteShipmentPage");
                } }>
                    Delete Shipment Page
                </button>
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("StocktakingListPage");
                } }>
                    Stocktaking List Page
                </button>
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("StocktakingDetailPage");
                } }>
                    Stocktaking Detail Page
                </button>
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("AddStocktakingPage");
                } }>
                    Add Stocktaking Page
                </button>
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("EditStocktakingPage");
                } }>
                    Edit Stocktaking Page
                </button>
                <button className="m-2 p-2 bg-blue-500 text-white rounded-lg" onClick={() => {
                    if(props.onNavigate) props.onNavigate("DeleteStocktakingPage");
                } }>
                    Delete Stocktaking Page
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
        path: "Dashboard",
        component: Dashboard
    },
    {
        path: "InventoryListPage",
        component: InventoryListPage
    },
    {
        path: "InventoryDetailPage",
        component: InventoryDetailPage
    },
    {
        path: "AddInventoryItemPage",
        component: AddInventoryItemPage
    },
    {
        path: "EditInventoryItemPage",
        component: EditInventoryItemPage
    },
    {
        path: "DeleteInventoryItemPage",
        component: DeleteInventoryItemPage
    },
    {
        path: "OrderListPage",
        component: OrderListPage
    },
    {
        path: "OrderDetailPage",
        component: OrderDetailPage
    },
    {
        path: "AddOrderPage",
        component: AddOrderPage
    },
    {
        path: "EditOrderPage",
        component: EditOrderPage
    },
    {
        path: "DeleteOrderPage",
        component: DeleteOrderPage
    },
    {
        path: "SupplierListPage",
        component: SupplierListPage
    },
    {
        path: "SupplierDetailPage",
        component: SupplierDetailPage
    },
    {
        path: "AddSupplierPage",
        component: AddSupplierPage
    },
    {
        path: "EditSupplierPage",
        component: EditSupplierPage
    },
    {
        path: "DeleteSupplierPage",
        component: DeleteSupplierPage
    },
    {
        path: "ShipmentListPage",
        component: ShipmentListPage
    },
    {
        path: "ShipmentDetailPage",
        component: ShipmentDetailPage
    },
    {
        path: "AddShipmentPage",
        component: AddShipmentPage
    },
    {
        path: "EditShipmentPage",
        component: EditShipmentPage
    },
    {
        path: "DeleteShipmentPage",
        component: DeleteShipmentPage
    },
    {
        path: "StocktakingListPage",
        component: StocktakingListPage
    },
    {
        path: "StocktakingDetailPage",
        component: StocktakingDetailPage
    },
    {
        path: "AddStocktakingPage",
        component: AddStocktakingPage
    },
    {
        path: "EditStocktakingPage",
        component: EditStocktakingPage
    },
    {
        path: "DeleteStocktakingPage",
        component: DeleteStocktakingPage
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