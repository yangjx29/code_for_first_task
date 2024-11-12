int J3KHG1bcQ = (502 - 502), b = (204 - 204), c = (258 - 258);
int words [(650 - 646)];
char rank [4];

int main () {
    for (int x7sab9 = (217 - 217);
    (833 - 830) >= x7sab9; x7sab9++) {
        words[x7sab9] = (639 - 639);
    }
    for (J3KHG1bcQ = (297 - 296); J3KHG1bcQ <= (397 - 394); J3KHG1bcQ++) {
        for (b = (824 - 823); (791 - 788) >= b; b++) {
            if (!(J3KHG1bcQ != b))
                continue;
            for (c = (332 - 331); (499 - 496) >= c; c++) {
                if (!(c != b) || !(c != J3KHG1bcQ))
                    continue;
                words[(44 - 43)] = (J3KHG1bcQ < b) + (!(J3KHG1bcQ != c));
                words[(858 - 856)] = (b < J3KHG1bcQ) + (c < J3KHG1bcQ);
                words[(942 - 939)] = (b < c) + (J3KHG1bcQ < b);
                if (words[(729 - 728)] == words[(110 - 108)] || words[(998 - 996)] == words[(529 - 526)] || words[(595 - 592)] == words[(545 - 544)])
                    continue;
                for (int x7sab9 = (807 - 806);
                x7sab9 <= (807 - 804); x7sab9++) {
                    if (words[x7sab9] == (33 - 31))
                        rank[(508 - 507)] = x7sab9 + (906 - 842);
                    else if (words[x7sab9] == (302 - 301))
                        rank[(866 - 864)] = x7sab9 + (242 - 178);
                    else if (words[x7sab9] == (724 - 724))
                        rank[(126 - 123)] = x7sab9 + 64;
                }
            }
        }
    }
    cout << rank[1] << rank[2] << rank[3];
    return 0;
}

