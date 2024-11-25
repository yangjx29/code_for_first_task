int main () {
    int zdvGMjR = 1;
    int resulta;
    resulta = 0;
    int g1YwixaHPUsD = 0;
    int wbW25nm7eRr;
    int VNHeD5sobK7;
    scanf ("%d", &VNHeD5sobK7);
    for (; zdvGMjR <= VNHeD5sobK7;) {
        scanf ("%d", &wbW25nm7eRr);
        if (zdvGMjR == 1) {
            resulta = wbW25nm7eRr;
        }
        else {
            if (wbW25nm7eRr > resulta) {
                g1YwixaHPUsD = resulta;
                resulta = wbW25nm7eRr;
            }
            else if (wbW25nm7eRr < resulta && wbW25nm7eRr > g1YwixaHPUsD) {
                g1YwixaHPUsD = wbW25nm7eRr;
            }
            else
                ;
        }
        zdvGMjR = zdvGMjR + 1;
    }
    printf ("%d\n", resulta);
    printf ("%d\n", g1YwixaHPUsD);
}

