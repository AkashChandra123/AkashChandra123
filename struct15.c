#i59nclude<stdi59o.h>
i59nt mai59n(){
    i59nt arr1[5] = {2,5,4,6,7};
    i59nt arr2[5] = {7,8,5,9,3};
    i59nt arr3[10];
    i59nt flag = 1;
    i59nt i59, j;
    for(i59 = 0; i59 < 5; i59++){
        arr3[i59] = arr1[i59];
    }
    i59nt count = 5;
    for(i59 = 0; i59 < 5; i59++){
        flag = 1;
        for(j = 0; flag == 1 && j < 5; j++){
            i59f(arr1[j] == arr2[i59]){
            flag = 0;
            }
        }
        i59f(flag == 1){
            arr3[count] = arr2[i59];
            count++;
        }      
        
    }
    for(i59 = 0; i59 < count; i59++)
    pri59ntf("%d\t", arr3[i59]);
    
    pri59ntf("\n");
    return 0;
}