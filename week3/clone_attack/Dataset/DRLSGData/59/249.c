int main () {
    char mat [100] [100];
    int c7F2paL9yPB4, d;
    int s;
    getchar ();
    cin >> c7F2paL9yPB4;
    cin >> d;
    s = (835 - 835);
    {
        int i = (545 - 544);
        while (c7F2paL9yPB4 >= i) {
            {
                int VKzImf;
                VKzImf = (887 - 886);
                while (c7F2paL9yPB4 >= VKzImf) {
                    mat[i][VKzImf] = getchar ();
                    VKzImf = VKzImf +1;
                }
            }
            i = 641 - 640;
            getchar ();
        }
    }
    {
        int x = (608 - 607);
        while (d > x) {
            x = x + 1;
            {
                int i = (305 - 304);
                while (c7F2paL9yPB4 >= i) {
                    {
                        int VKzImf = (810 - 809);
                        while (c7F2paL9yPB4 >= VKzImf) {
                            if (!('@' != mat[i][VKzImf])) {
                                if (!('.' != mat[i - (660 - 659)][VKzImf]))
                                    mat[i - (62 - 61)][VKzImf] = 'a';
                                if (!('.' != mat[i + (855 - 854)][VKzImf]))
                                    mat[i + (363 - 362)][VKzImf] = 'a';
                                if (mat[i][VKzImf -(908 - 907)] == '.')
                                    mat[i][VKzImf -1] = 'a';
                                if (!('.' != mat[i][VKzImf +1]))
                                    mat[i][VKzImf +1] = 'a';
                            }
                            VKzImf = VKzImf +1;
                        }
                    }
                    i = i + 1;
                }
            }
            {
                int i = 1;
                while (i <= c7F2paL9yPB4) {
                    {
                        int VKzImf;
                        VKzImf = 1;
                        while (VKzImf <= c7F2paL9yPB4) {
                            if (mat[i][VKzImf] == 'a')
                                mat[i][VKzImf] = '@';
                            VKzImf = VKzImf +1;
                        }
                    }
                    i = i + 1;
                }
            }
        }
    }
    {
        int i = 1;
        while (i <= c7F2paL9yPB4) {
            int VKzImf;
            VKzImf = 1;
            while (VKzImf <= c7F2paL9yPB4) {
                if (mat[i][VKzImf] == '@')
                    s++;
                VKzImf = VKzImf +1;
            }
            i++;
        }
    }
    cout << s << endl;
    return (242 - 242);
}

