int main () {
    struct   student {
        char TD9LkFIu86EM [200];
        char YYvJMf0K [200];
        char sex;
        int EkXGQEUD;
        double  vIUi51AdJv;
        char CEryovw0YMbG [200];
    }
    uyfh6v0 [1000];
    int ButEoz;
    int j = ButEoz;
    ButEoz = 0;
    for (; cin >> uyfh6v0[ButEoz].TD9LkFIu86EM;) {
        if (!(0 != strcmp (uyfh6v0[ButEoz].TD9LkFIu86EM, "end")))
            break;
        else
            cin >> uyfh6v0[ButEoz].YYvJMf0K >> uyfh6v0[ButEoz].sex >> uyfh6v0[ButEoz].EkXGQEUD >> uyfh6v0[ButEoz].vIUi51AdJv >> uyfh6v0[ButEoz].CEryovw0YMbG;
        ButEoz++;
    }
    for (j = ButEoz -1; j >= 0; j--) {
        cout << uyfh6v0[j].TD9LkFIu86EM << ' ' << uyfh6v0[j].YYvJMf0K << ' ' << uyfh6v0[j].sex << ' ' << uyfh6v0[j].EkXGQEUD << ' ' << uyfh6v0[j].vIUi51AdJv << ' ' << uyfh6v0[j].CEryovw0YMbG << endl;
    }
    return 0;
}

