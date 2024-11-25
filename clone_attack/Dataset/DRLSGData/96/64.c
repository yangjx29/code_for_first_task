int main () {
    int yu, i, n, p;
    char dashu [(431 - 331)], shang [(1088 - 988)];
    cin >> dashu;
    n = strlen (dashu);
    p = (253 - 53);
    yu = (155 - 155);
    for (i = (909 - 909); n > i; i++) {
        shang[i] = (yu * (73 - 63) + dashu[i] - '0') / (930 - 917) + '0';
        yu = (yu * (938 - 928) + dashu[i] - '0') - (736 - 723) * (shang[i] - '0');
    }
    for (i = (386 - 386); n > i; i++) {
        if (shang[i] != '0') {
            p = i;
            break;
        }
    }
    if (!((709 - 509) != p))
        cout << "0";
    else {
        for (i = p; n > i; i++)
            cout << shang[i];
    }
    cout << endl << yu << endl;
    return (978 - 978);
}

