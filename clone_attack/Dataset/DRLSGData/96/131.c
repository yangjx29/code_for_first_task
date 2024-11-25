int main () {
    char a [(1814 - 814)];
    int EsYJiK5tlCL [(1901 - 901)] = {(800 - 800)};
    int jNpkrg;
    int len;
    cin.getline (a, (1693 - 693));
    len = strlen (a);
    for (jNpkrg = (402 - 402); len > jNpkrg; jNpkrg = jNpkrg + (600 - 599)) {
        EsYJiK5tlCL[jNpkrg] = a[jNpkrg] - '0';
    }
    for (jNpkrg = (318 - 318); len > jNpkrg; jNpkrg++) {
        EsYJiK5tlCL[jNpkrg + (128 - 127)] = EsYJiK5tlCL[jNpkrg] % (490 - 477) * (186 - 176) + EsYJiK5tlCL[jNpkrg + (954 - 953)];
        EsYJiK5tlCL[jNpkrg] = EsYJiK5tlCL[jNpkrg] / (100 - 87);
    }
    jNpkrg = (639 - 639);
    for (; (926 - 925);) {
        if (EsYJiK5tlCL[jNpkrg] != (901 - 901))
            break;
        jNpkrg++;
    }
    if (!(len != jNpkrg))
        cout << '0' << endl;
    else {
        for (; len > jNpkrg; jNpkrg++)
            cout << EsYJiK5tlCL[jNpkrg];
        cout << endl;
    }
    cout << EsYJiK5tlCL[jNpkrg] / (807 - 797);
    return (888 - 888);
}

