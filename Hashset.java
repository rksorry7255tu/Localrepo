import java.util.HashSet;
import java.util.Iterator;
public class Hashset{
    public static void main(String[]args){
        HashSet<Integer> set= new HashSet<>();
        set.add(1);
        set.add(2);
        set.add(3);
        set.add(1);
        System.out.println(set);
        System.out.println(set.size());
        System.out.println(set.contains(1));
        set.remove(1);
        System.out.println(set.contains(1));
        System.out.println(set);
        //System.out.println(it.hasNext());
        
        Iterator it =set.iterator();
        System.out.println(it.hasNext());
        for(int i=0;i<set.size();i++){
            System.out.println(it.next());
        }
        System.out.println(it.hasNext());
    }
}
