/**
 * @param {number} num
 * @return {string[]}
 */
var readBinaryWatch = function(num) {
    let res = [];
    var cont_res = 0;
    let hour = [
        ["0"],
        ["1", "2", "4", "8"],
        ["3", "5", "6", "9", "10"],
        ["7", "11"],
    ];
    let minute = [
        ["00"],
        ["01", "02", "04", "08", "16", "32"],
        ["03", "05", "06", "09", "10", "12", "17", "18", "20", "24", "33", "34", "36", "40", "48"],
        ["07", "11", "13", "14", "19", "21", "22", "25", "26", "28", "35", "37", "38", "41", "42", "44", "49", "50", "52", "56"],
        ["15", "23", "27", "29", "30", "39", "43", "45", "46", "51", "53", "54", "57", "58"],
        ["31", "47", "55", "59"]
    ];
    let i = 0;
    for (; i <= 3 && i <= num; i++){
        if (num - i <= 5){
            let length_hour = hour[i].length;
            let temp_hour = 0;
            for (; temp_hour < length_hour; temp_hour++){
                let length_minute = minute[num-i].length;
                let temp_minute = 0;
                for (; temp_minute < length_minute; temp_minute++){
                    res[cont_res++] = hour[i][temp_hour] + ":" + minute[num-i][temp_minute];
                }
            }
        }
    }
    return res;
};