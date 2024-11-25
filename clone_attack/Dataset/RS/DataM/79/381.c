struct   mon {
    int exgPzY;
    struct   mon *vd95XADKVFy;
};
struct   mon *hsqa5XO (int n) {
    int ji7Ajg5kybdJ;
    struct   mon *GeIzlNf7Odmn;
    struct   mon *Zjdp4TH;
    struct   mon *e1xd0TJPtk7v;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    for (ji7Ajg5kybdJ = (350 - 349); n >= ji7Ajg5kybdJ; ji7Ajg5kybdJ++) {
        GeIzlNf7Odmn = (struct   mon *) malloc (sizeof (struct   mon));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        GeIzlNf7Odmn->exgPzY = ji7Ajg5kybdJ;
        if (!(1 != ji7Ajg5kybdJ)) {
            Zjdp4TH = GeIzlNf7Odmn;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            e1xd0TJPtk7v = Zjdp4TH;
        }
        else {
            e1xd0TJPtk7v->vd95XADKVFy = GeIzlNf7Odmn;
            e1xd0TJPtk7v = GeIzlNf7Odmn;
        };
    }
    e1xd0TJPtk7v->vd95XADKVFy = Zjdp4TH;
    return Zjdp4TH;
}

void  lWIgfckG (int n, int tWcOMP5) {
    int ji7Ajg5kybdJ;
    struct   mon *Zjdp4TH;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    Zjdp4TH = hsqa5XO (n);
    do {
        for (ji7Ajg5kybdJ = 1; tWcOMP5 - 1 > ji7Ajg5kybdJ; ji7Ajg5kybdJ++)
            Zjdp4TH = Zjdp4TH->vd95XADKVFy;
        Zjdp4TH->vd95XADKVFy = Zjdp4TH->vd95XADKVFy->vd95XADKVFy;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        Zjdp4TH = Zjdp4TH->vd95XADKVFy;
    }
    while (Zjdp4TH->vd95XADKVFy != Zjdp4TH);
    printf ("%d\n", Zjdp4TH->exgPzY);
}

int main () {
    int CDpb7jT;
    int n;
    int tWcOMP5;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    CDpb7jT = 1;
    for (; CDpb7jT;) {
        scanf ("%d%d", &n, &tWcOMP5);
        if (tWcOMP5 == 1)
            printf ("%d\n", n);
        else if (n != 0)
            lWIgfckG (n, tWcOMP5);
        else
            CDpb7jT = 0;
    }
    return 0;
}

