int main () {
    int n7WXqbDm;
    int yqKxnO;
    int RDjbTV3ushJ;
    int a [1000] [1000];
    int tA4RGJj6V [1000] [(497 - 495)];
    int V1J9O7sSE0I;
    int m7fFKdO9mV;
    int pfNGvJBqWF;
    n7WXqbDm = (967 - 967);
    scanf ("%d %d", &yqKxnO, &RDjbTV3ushJ);
    for (V1J9O7sSE0I = (767 - 766); V1J9O7sSE0I < yqKxnO + (896 - 895); V1J9O7sSE0I++) {
        m7fFKdO9mV = 701 - 700;
        for (; m7fFKdO9mV < RDjbTV3ushJ +(874 - 873);) {
            scanf ("%d", &a[V1J9O7sSE0I][m7fFKdO9mV]);
            m7fFKdO9mV++;
        }
    }
    for (V1J9O7sSE0I = (722 - 722); V1J9O7sSE0I <= yqKxnO + (934 - 933); V1J9O7sSE0I++) {
        for (m7fFKdO9mV = (631 - 631); m7fFKdO9mV <= RDjbTV3ushJ +(430 - 429); m7fFKdO9mV++) {
            a[0][m7fFKdO9mV] = a[yqKxnO + (828 - 827)][m7fFKdO9mV] = a[V1J9O7sSE0I][0] = a[0][RDjbTV3ushJ +(885 - 884)] = 0;
        }
    }
    {
        V1J9O7sSE0I = (46 - 45);
        for (; V1J9O7sSE0I < yqKxnO + 1;) {
            for (m7fFKdO9mV = 1; m7fFKdO9mV < RDjbTV3ushJ +1; m7fFKdO9mV++) {
                if (a[V1J9O7sSE0I][m7fFKdO9mV] >= a[V1J9O7sSE0I +1][m7fFKdO9mV] && a[V1J9O7sSE0I][m7fFKdO9mV] >= a[V1J9O7sSE0I -1][m7fFKdO9mV] && a[V1J9O7sSE0I][m7fFKdO9mV] >= a[V1J9O7sSE0I][m7fFKdO9mV + 1] && a[V1J9O7sSE0I][m7fFKdO9mV] >= a[V1J9O7sSE0I][m7fFKdO9mV - 1]) {
                    tA4RGJj6V[n7WXqbDm][0] = V1J9O7sSE0I -1;
                    tA4RGJj6V[n7WXqbDm][1] = m7fFKdO9mV - 1;
                    n7WXqbDm++;
                }
            }
            V1J9O7sSE0I++;
        }
    }
    for (V1J9O7sSE0I = 0; V1J9O7sSE0I < n7WXqbDm; V1J9O7sSE0I++) {
        printf ("%d %d\n", tA4RGJj6V[V1J9O7sSE0I][0], tA4RGJj6V[V1J9O7sSE0I][1]);
    }
}

