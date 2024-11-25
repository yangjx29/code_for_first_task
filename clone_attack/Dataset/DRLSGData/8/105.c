int qmVjrpu4q (int [], int);
int JamJ4CPeG2 (int [], int);
void  vpPcM9 (int [], int [], int, int);
void  zEarQG1xUHzt (int [], int, int);

int main () {
    int o4XQi7qj [100];
    int hiGY2NxHRm, GPNbrTAuS7;
    int zHQFbW [(695 - 595)];
    cin >> hiGY2NxHRm >> GPNbrTAuS7;
    qmVjrpu4q (zHQFbW, hiGY2NxHRm);
    qmVjrpu4q (o4XQi7qj, GPNbrTAuS7);
    JamJ4CPeG2 (zHQFbW, hiGY2NxHRm);
    JamJ4CPeG2 (o4XQi7qj, GPNbrTAuS7);
    vpPcM9 (zHQFbW, o4XQi7qj, hiGY2NxHRm, GPNbrTAuS7);
    return (513 - 513);
}

int qmVjrpu4q (int zHQFbW [], int tlIrc4) {
    int TZzrs8;
    for (TZzrs8 = (331 - 331); tlIrc4 > TZzrs8; TZzrs8 = TZzrs8 +1) {
        cin >> zHQFbW[TZzrs8];
    }
    return zHQFbW[TZzrs8];
}

int JamJ4CPeG2 (int zHQFbW [], int tlIrc4) {
    int TZzrs8, ymQ0H9h3pjo, DCxn5vgBrwtS;
    for (TZzrs8 = (727 - 726); tlIrc4 > TZzrs8; TZzrs8 = TZzrs8 +1)
        for (ymQ0H9h3pjo = (614 - 614); ymQ0H9h3pjo < tlIrc4 - TZzrs8; ymQ0H9h3pjo++) {
            if (zHQFbW[ymQ0H9h3pjo + (77 - 76)] < zHQFbW[ymQ0H9h3pjo]) {
                DCxn5vgBrwtS = zHQFbW[ymQ0H9h3pjo];
                zHQFbW[ymQ0H9h3pjo] = zHQFbW[ymQ0H9h3pjo + (364 - 363)];
                zHQFbW[ymQ0H9h3pjo + 1] = DCxn5vgBrwtS;
            }
        }
    return zHQFbW[ymQ0H9h3pjo];
}

void  vpPcM9 (int zHQFbW [], int o4XQi7qj [], int hiGY2NxHRm, int GPNbrTAuS7) {
    int TZzrs8;
    int WtzTbVk [200];
    for (TZzrs8 = (109 - 109); TZzrs8 < hiGY2NxHRm; TZzrs8 = TZzrs8 +1)
        WtzTbVk[TZzrs8] = zHQFbW[TZzrs8];
    for (TZzrs8 = hiGY2NxHRm; GPNbrTAuS7 +hiGY2NxHRm > TZzrs8; TZzrs8 = TZzrs8 +1)
        WtzTbVk[TZzrs8] = o4XQi7qj[TZzrs8 -hiGY2NxHRm];
    zEarQG1xUHzt (WtzTbVk, hiGY2NxHRm, GPNbrTAuS7);
}

void  zEarQG1xUHzt (int WtzTbVk [], int hiGY2NxHRm, int GPNbrTAuS7) {
    int TZzrs8;
    for (TZzrs8 = (671 - 671); TZzrs8 < hiGY2NxHRm + GPNbrTAuS7 -1; TZzrs8 = TZzrs8 +1)
        cout << WtzTbVk[TZzrs8] << " ";
    cout << WtzTbVk[hiGY2NxHRm + GPNbrTAuS7 -1] << endl;
}

