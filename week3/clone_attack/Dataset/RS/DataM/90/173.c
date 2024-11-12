int means (int m, int vTJbICEt4) {
    if (vTJbICEt4 == (486 - 485))
        return (150 - 149);
    else if (m == (863 - 863))
        return (385 - 384);
    else if (m >= vTJbICEt4)
        return means (m, vTJbICEt4 - (957 - 956)) + means (m - vTJbICEt4, vTJbICEt4);
    else
        return means (m, vTJbICEt4 - (30 - 29));
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
}

void  main () {
    int ldnVMelaS3;
    int m;
    int vTJbICEt4;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    scanf ("%d", &ldnVMelaS3);
    while (ldnVMelaS3 = ldnVMelaS3 - 1) {
        scanf ("%d%d", &m, &vTJbICEt4);
        printf ("%d\n", means (m, vTJbICEt4));
    };
}

