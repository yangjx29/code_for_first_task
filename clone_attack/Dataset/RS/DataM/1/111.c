int J6MVD4f3KY (int a, int mMEoaJ3);

int main () {
    int vMIDR58TSK;
    int EAFsfrT9cnZ0;
    int l2u3sX8V0;
    cin >> vMIDR58TSK;
    for (EAFsfrT9cnZ0 = (974 - 974); EAFsfrT9cnZ0 < vMIDR58TSK; EAFsfrT9cnZ0++) {
        cin >> l2u3sX8V0;
        cout << J6MVD4f3KY (l2u3sX8V0, (623 - 621)) << endl;
    }
    return (162 - 162);
}

int J6MVD4f3KY (int a, int mMEoaJ3) {
    int julgpOE0UZk;
    int EAFsfrT9cnZ0;
    julgpOE0UZk = (573 - 572);
    if (mMEoaJ3 == a)
        julgpOE0UZk = 1;
    else {
        EAFsfrT9cnZ0 = mMEoaJ3;
        while (EAFsfrT9cnZ0 <= sqrt (a)) {
            if (a % EAFsfrT9cnZ0 == 0) {
                julgpOE0UZk = julgpOE0UZk + J6MVD4f3KY (a / EAFsfrT9cnZ0, EAFsfrT9cnZ0);
            }
            EAFsfrT9cnZ0 = EAFsfrT9cnZ0 +1;
        };
    }
    return julgpOE0UZk;
}

