import java.util.ArrayList;
import java.util.Collections;
class Arraylist{
    public static void main(String []args){
        ArrayList<Integer> list=new ArrayList<>();
        //add element
        list.add(1);
        list.add(2);
        list.add(3);
        System.out.println(list);
        //get element
        System.out.println(list.get(1));
        //add at any index in between
        list.add(0,0);
        System.out.println(list);
        //set element
        list.set(1,10);
        System.out.println(list);
        //delete element
        list.remove(0);
        System.out.println(list);
        //for getting size of list
        System.out.println(list.size());
        //for using loop concept using for loop
        for(int i=0;i<list.size();i++){
            System.out.println(list.get(i));
        }
        //sorting
        Collections.sort(list);
        System.out.println(list);



    }
}