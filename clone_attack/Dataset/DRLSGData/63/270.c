int HdJwhpjabmo [ZI08phoHD] [ZI08phoHD], sMiIJzP9m [ZI08phoHD] [ZI08phoHD], x2iWKP [ZI08phoHD] [ZI08phoHD];

int main () {
    int feuQgIv;
    int k4zbAfjN;
    int vO1oWla;
    int mC4EGAa;
    cin >> feuQgIv >> k4zbAfjN;
    for (int z3BXtkWU25 = (372 - 371);
    z3BXtkWU25 <= feuQgIv; z3BXtkWU25++)
        for (int ozas9mvM45C = (795 - 794);
        ozas9mvM45C <= k4zbAfjN; ozas9mvM45C++)
            cin >> HdJwhpjabmo[z3BXtkWU25][ozas9mvM45C];
    cin >> vO1oWla >> mC4EGAa;
    for (int z3BXtkWU25 = (153 - 152);
    z3BXtkWU25 <= vO1oWla; z3BXtkWU25++)
        for (int ozas9mvM45C = (168 - 167);
        mC4EGAa >= ozas9mvM45C; ozas9mvM45C++)
            cin >> sMiIJzP9m[z3BXtkWU25][ozas9mvM45C];
    for (int z3BXtkWU25 = 1;
    z3BXtkWU25 <= feuQgIv; z3BXtkWU25++) {
        for (int ozas9mvM45C = 1;
        ozas9mvM45C <= mC4EGAa; ozas9mvM45C++) {
            int vWeHy9;
            vWeHy9 = 0;
            for (int S0u4Q8f7DNya = 1;
            S0u4Q8f7DNya <= k4zbAfjN; S0u4Q8f7DNya++)
                vWeHy9 += HdJwhpjabmo[z3BXtkWU25][S0u4Q8f7DNya] * sMiIJzP9m[S0u4Q8f7DNya][ozas9mvM45C];
            x2iWKP[z3BXtkWU25][ozas9mvM45C] = vWeHy9;
        }
    }
    for (int z3BXtkWU25 = 1;
    z3BXtkWU25 <= feuQgIv; z3BXtkWU25++) {
        for (int ozas9mvM45C = 1;
        ozas9mvM45C <= mC4EGAa; ozas9mvM45C++) {
            if (ozas9mvM45C != 1)
                cout << ' ';
            cout << x2iWKP[z3BXtkWU25][ozas9mvM45C];
        }
        cout << endl;
    }
    return 0;
}

