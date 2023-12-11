import java.util.*;

public class Hashmap{
    public static void main(String[]args){
        HashMap<String,Integer> map=new HashMap<>();
        //insertion
        map.put("India",120);
        map.put("us",30);
        map.put("China",150);
        System.out.println(map);
        map.put("India",150);
        System.out.println(map);
        System.out.println(map.containsKey("India"));
        System.out.println(map.get("India"));
        System.out.println(map.get("india"));
        
        for(int val:3 ){
            System.out.println(val+" ");
        }
    }
}