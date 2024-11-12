int main () {
    char a [100];
    char *p = NULL;
    char *YHg0zvqrWU3 = NULL;
    int BMVZO21es, CLvfPF69hx, deletenum = 0;
    cin.getline (a, 100);
    BMVZO21es = strlen (a);
    {
        p = a;
        while (a + BMVZO21es > p) {
            if (!(' ' == *p)) {
                CLvfPF69hx = 0;
            }
            else {
                CLvfPF69hx = CLvfPF69hx +1;
                if (1 < CLvfPF69hx) {
                    deletenum = deletenum + 1;
                    for (YHg0zvqrWU3 = p; YHg0zvqrWU3 < a + BMVZO21es -deletenum; YHg0zvqrWU3 = YHg0zvqrWU3 +1) {
                        *YHg0zvqrWU3 = *(YHg0zvqrWU3 +1);
                    }
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
                    p = p - 1;
                };
            }
            p = p + 1;
        };
    }
    {
        p = a;
        while (p < a + BMVZO21es -deletenum) {
            cout << *p;
            p++;
        };
    }
    cout << endl;
    return 0;
}

