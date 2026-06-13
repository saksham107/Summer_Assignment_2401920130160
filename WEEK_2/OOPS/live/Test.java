package live;
import music.*;
import music.string.Veena;
import music.wind.Saxophone;

public class Test {
    public static void main(String[] args) {
        Veena v = new Veena();
        v.play();

        Saxophone s = new Saxophone();
        s.play();

        Playable p=new Veena();
        p.play();

        Playable q=new Saxophone();
        q.play();
    }
}


