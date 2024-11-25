int main () {
    int qts4o5NBl [101] [101];
    int V8FcVTPnOfB;
    int (*jDEdYX) [101] = NULL;
    int jnrBS59;
    int HZ06MdDla;
    int BqhtMX;
    int dd8rxqiJG5BX;
    int T6sBZjwRHy;
    cin >> dd8rxqiJG5BX;
    for (BqhtMX = 0; dd8rxqiJG5BX > BqhtMX; BqhtMX++) {
        int dMctSUNE;
        cin >> T6sBZjwRHy >> V8FcVTPnOfB;
        for (jnrBS59 = 0; jnrBS59 < T6sBZjwRHy; jnrBS59 = jnrBS59 + 1)
            for (HZ06MdDla = 0; V8FcVTPnOfB > HZ06MdDla; HZ06MdDla = HZ06MdDla +1)
                cin >> qts4o5NBl[jnrBS59][HZ06MdDla];
        jDEdYX = qts4o5NBl;
        dMctSUNE = 0;
        for (jnrBS59 = 0; jnrBS59 < T6sBZjwRHy; jnrBS59++) {
            {
                if (0) {
                    return 0;
                }
            }
            for (HZ06MdDla = 0; HZ06MdDla < V8FcVTPnOfB; HZ06MdDla++) {
                if ((jnrBS59 == 0) || (!(T6sBZjwRHy -1 != jnrBS59)) || (HZ06MdDla == 0) || (HZ06MdDla == V8FcVTPnOfB -1))
                    dMctSUNE = dMctSUNE + *(*(jDEdYX + jnrBS59) + HZ06MdDla);
            }
        }
        cout << dMctSUNE << endl;
    }
    return 0;
}

