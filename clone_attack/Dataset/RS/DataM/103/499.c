int main () {
    int count;
    int hvNKBXubf;
    int ppz7PdNo6t;
    count = (624 - 623);
    char mFqoWbxps [1000];
    cin >> mFqoWbxps;
    ppz7PdNo6t = strlen (mFqoWbxps);
    for (hvNKBXubf = (859 - 859); hvNKBXubf < ppz7PdNo6t; hvNKBXubf = hvNKBXubf + 1) {
        if (mFqoWbxps[hvNKBXubf] - 'a' >= 0 && 0 >= mFqoWbxps[hvNKBXubf] - 'z')
            mFqoWbxps[hvNKBXubf] = mFqoWbxps[hvNKBXubf] - 'a' + 'A';
    }
    for (hvNKBXubf = 0; hvNKBXubf < ppz7PdNo6t - 1; hvNKBXubf = hvNKBXubf + 1) {
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
        if (mFqoWbxps[hvNKBXubf] == mFqoWbxps[hvNKBXubf + 1])
            count = count + 1;
        else {
            cout << "(" << mFqoWbxps[hvNKBXubf] << "," << count << ")";
            count = 1;
        };
    }
    if (mFqoWbxps[ppz7PdNo6t - 2] == mFqoWbxps[ppz7PdNo6t - 1])
        cout << "(" << mFqoWbxps[ppz7PdNo6t - 1] << "," << count << ")";
    else
        cout << "(" << mFqoWbxps[ppz7PdNo6t - 1] << "," << count << ")";
    return 0;
}

