int output = binarySearch(arr, n , target);
    if(output == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element is present at index : "<<output<<endl;
    }
    return 0;
}