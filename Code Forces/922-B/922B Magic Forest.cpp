#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    //I know it does not makes sense but this is the "FASTEST" way.
    int n;
    cin >> n;
    int arr[2501] = {0,0,0,0,0,0,1,1,1,1,2,2,5,7,10,10,10,10,11,11,14,16,19,19,26,32,39,43,52,58,65,65,65,65,66,66,69,71,74,74,81,87,94,98,107,113,120,120,135,149,164,176,193,207,222,230,251,269,288,300,321,335,350,350,350,350,351,351,354,356,359,359,366,372,379,383,392,398,405,405,420,434,449,461,478,492,507,515,536,554,573,585,606,620,635,635,666,696,727,755,788,818,849,873,910,944,979,1007,1044,1074,1105,1121,1166,1208,1251,1287,1332,1370,1409,1433,1482,1524,1567,1595,1640,1670,1701,1701,1701,1701,1702,1702,1705,1707,1710,1710,1717,1723,1730,1734,1743,1749,1756,1756,1771,1785,1800,1812,1829,1843,1858,1866,1887,1905,1924,1936,1957,1971,1986,1986,2017,2047,2078,2106,2139,2169,2200,2224,2261,2295,2330,2358,2395,2425,2456,2472,2517,2559,2602,2638,2683,2721,2760,2784,2833,2875,2918,2946,2991,3021,3052,3052,3115,3177,3240,3300,3365,3427,3490,3546,3615,3681,3748,3808,3877,3939,4002,4050,4127,4201,4276,4344,4421,4491,4562,4618,4699,4773,4848,4908,4985,5047,5110,5142,5235,5325,5416,5500,5593,5679,5766,5838,5935,6025,6116,6192,6285,6363,6442,6490,6595,6693,6792,6876,6977,7063,7150,7206,7311,7401,7492,7552,7645,7707,7770,7770,7770,7770,7771,7771,7774,7776,7779,7779,7786,7792,7799,7803,7812,7818,7825,7825,7840,7854,7869,7881,7898,7912,7927,7935,7956,7974,7993,8005,8026,8040,8055,8055,8086,8116,8147,8175,8208,8238,8269,8293,8330,8364,8399,8427,8464,8494,8525,8541,8586,8628,8671,8707,8752,8790,8829,8853,8902,8944,8987,9015,9060,9090,9121,9121,9184,9246,9309,9369,9434,9496,9559,9615,9684,9750,9817,9877,9946,10008,10071,10119,10196,10270,10345,10413,10490,10560,10631,10687,10768,10842,10917,10977,11054,11116,11179,11211,11304,11394,11485,11569,11662,11748,11835,11907,12004,12094,12185,12261,12354,12432,12511,12559,12664,12762,12861,12945,13046,13132,13219,13275,13380,13470,13561,13621,13714,13776,13839,13839,13966,14092,14219,14343,14472,14598,14725,14845,14978,15108,15239,15363,15496,15622,15749,15861,16002,16140,16279,16411,16552,16686,16821,16941,17086,17224,17363,17487,17628,17754,17881,17977,18134,18288,18443,18591,18748,18898,19049,19185,19346,19500,19655,19795,19952,20094,20237,20349,20518,20680,20843,20991,21156,21306,21457,21577,21746,21900,22055,22179,22336,22462,22589,22653,22842,23028,23215,23395,23584,23766,23949,24117,24310,24496,24683,24855,25044,25218,25393,25537,25738,25932,26127,26307,26504,26686,26869,27021,27222,27408,27595,27751,27940,28098,28257,28353,28570,28780,28991,29187,29400,29598,29797,29965,30182,30384,30587,30759,30964,31138,31313,31425,31650,31860,32071,32251,32464,32646,32829,32949,33166,33352,33539,33663,33852,33978,34105,34105,34105,34105,34106,34106,34109,34111,34114,34114,34121,34127,34134,34138,34147,34153,34160,34160,34175,34189,34204,34216,34233,34247,34262,34270,34291,34309,34328,34340,34361,34375,34390,34390,34421,34451,34482,34510,34543,34573,34604,34628,34665,34699,34734,34762,34799,34829,34860,34876,34921,34963,35006,35042,35087,35125,35164,35188,35237,35279,35322,35350,35395,35425,35456,35456,35519,35581,35644,35704,35769,35831,35894,35950,36019,36085,36152,36212,36281,36343,36406,36454,36531,36605,36680,36748,36825,36895,36966,37022,37103,37177,37252,37312,37389,37451,37514,37546,37639,37729,37820,37904,37997,38083,38170,38242,38339,38429,38520,38596,38689,38767,38846,38894,38999,39097,39196,39280,39381,39467,39554,39610,39715,39805,39896,39956,40049,40111,40174,40174,40301,40427,40554,40678,40807,40933,41060,41180,41313,41443,41574,41698,41831,41957,42084,42196,42337,42475,42614,42746,42887,43021,43156,43276,43421,43559,43698,43822,43963,44089,44216,44312,44469,44623,44778,44926,45083,45233,45384,45520,45681,45835,45990,46130,46287,46429,46572,46684,46853,47015,47178,47326,47491,47641,47792,47912,48081,48235,48390,48514,48671,48797,48924,48988,49177,49363,49550,49730,49919,50101,50284,50452,50645,50831,51018,51190,51379,51553,51728,51872,52073,52267,52462,52642,52839,53021,53204,53356,53557,53743,53930,54086,54275,54433,54592,54688,54905,55115,55326,55522,55735,55933,56132,56300,56517,56719,56922,57094,57299,57473,57648,57760,57985,58195,58406,58586,58799,58981,59164,59284,59501,59687,59874,59998,60187,60313,60440,60440,60695,60949,61204,61456,61713,61967,62222,62470,62731,62989,63248,63500,63761,64015,64270,64510,64779,65045,65312,65572,65841,66103,66366,66614,66887,67153,67420,67672,67941,68195,68450,68674,68959,69241,69524,69800,70085,70363,70642,70906,71195,71477,71760,72028,72313,72583,72854,73094,73391,73681,73972,74248,74541,74819,75098,75346,75643,75925,76208,76460,76745,76999,77254,77446,77763,78077,78392,78700,79017,79327,79638,79934,80255,80569,80884,81184,81501,81803,82106,82378,82707,83029,83352,83660,83985,84295,84606,84886,85215,85529,85844,86128,86445,86731,87018,87242,87587,87925,88264,88588,88929,89255,89582,89878,90223,90553,90884,91184,91517,91819,92122,92362,92715,93053,93392,93700,94041,94351,94662,94910,95255,95569,95884,96136,96453,96707,96962,97090,97471,97849,98228,98600,98981,99355,99730,100090,100475,100853,101232,101596,101977,102343,102710,103046,103439,103825,104212,104584,104973,105347,105722,106066,106459,106837,107216,107564,107945,108295,108646,108934,109343,109745,110148,110536,110941,111331,111722,112082,112491,112885,113280,113644,114041,114407,114774,115078,115495,115897,116300,116672,117077,117451,117826,118138,118547,118925,119304,119620,120001,120319,120638,120830,121271,121705,122140,122560,122997,123419,123842,124234,124675,125101,125528,125924,126353,126751,127150,127486,127935,128369,128804,129208,129645,130051,130458,130802,131243,131653,132064,132412,132825,133175,133526,133750,134215,134665,135116,135536,135989,136411,136834,137194,137651,138077,138504,138868,139297,139663,140030,140270,140735,141169,141604,141976,142413,142787,143162,143410,143851,144229,144608,144860,145241,145495,145750,145750,145750,145750,145751,145751,145754,145756,145759,145759,145766,145772,145779,145783,145792,145798,145805,145805,145820,145834,145849,145861,145878,145892,145907,145915,145936,145954,145973,145985,146006,146020,146035,146035,146066,146096,146127,146155,146188,146218,146249,146273,146310,146344,146379,146407,146444,146474,146505,146521,146566,146608,146651,146687,146732,146770,146809,146833,146882,146924,146967,146995,147040,147070,147101,147101,147164,147226,147289,147349,147414,147476,147539,147595,147664,147730,147797,147857,147926,147988,148051,148099,148176,148250,148325,148393,148470,148540,148611,148667,148748,148822,148897,148957,149034,149096,149159,149191,149284,149374,149465,149549,149642,149728,149815,149887,149984,150074,150165,150241,150334,150412,150491,150539,150644,150742,150841,150925,151026,151112,151199,151255,151360,151450,151541,151601,151694,151756,151819,151819,151946,152072,152199,152323,152452,152578,152705,152825,152958,153088,153219,153343,153476,153602,153729,153841,153982,154120,154259,154391,154532,154666,154801,154921,155066,155204,155343,155467,155608,155734,155861,155957,156114,156268,156423,156571,156728,156878,157029,157165,157326,157480,157635,157775,157932,158074,158217,158329,158498,158660,158823,158971,159136,159286,159437,159557,159726,159880,160035,160159,160316,160442,160569,160633,160822,161008,161195,161375,161564,161746,161929,162097,162290,162476,162663,162835,163024,163198,163373,163517,163718,163912,164107,164287,164484,164666,164849,165001,165202,165388,165575,165731,165920,166078,166237,166333,166550,166760,166971,167167,167380,167578,167777,167945,168162,168364,168567,168739,168944,169118,169293,169405,169630,169840,170051,170231,170444,170626,170809,170929,171146,171332,171519,171643,171832,171958,172085,172085,172340,172594,172849,173101,173358,173612,173867,174115,174376,174634,174893,175145,175406,175660,175915,176155,176424,176690,176957,177217,177486,177748,178011,178259,178532,178798,179065,179317,179586,179840,180095,180319,180604,180886,181169,181445,181730,182008,182287,182551,182840,183122,183405,183673,183958,184228,184499,184739,185036,185326,185617,185893,186186,186464,186743,186991,187288,187570,187853,188105,188390,188644,188899,189091,189408,189722,190037,190345,190662,190972,191283,191579,191900,192214,192529,192829,193146,193448,193751,194023,194352,194674,194997,195305,195630,195940,196251,196531,196860,197174,197489,197773,198090,198376,198663,198887,199232,199570,199909,200233,200574,200900,201227,201523,201868,202198,202529,202829,203162,203464,203767,204007,204360,204698,205037,205345,205686,205996,206307,206555,206900,207214,207529,207781,208098,208352,208607,208735,209116,209494,209873,210245,210626,211000,211375,211735,212120,212498,212877,213241,213622,213988,214355,214691,215084,215470,215857,216229,216618,216992,217367,217711,218104,218482,218861,219209,219590,219940,220291,220579,220988,221390,221793,222181,222586,222976,223367,223727,224136,224530,224925,225289,225686,226052,226419,226723,227140,227542,227945,228317,228722,229096,229471,229783,230192,230570,230949,231265,231646,231964,232283,232475,232916,233350,233785,234205,234642,235064,235487,235879,236320,236746,237173,237569,237998,238396,238795,239131,239580,240014,240449,240853,241290,241696,242103,242447,242888,243298,243709,244057,244470,244820,245171,245395,245860,246310,246761,247181,247634,248056,248479,248839,249296,249722,250149,250513,250942,251308,251675,251915,252380,252814,253249,253621,254058,254432,254807,255055,255496,255874,256253,256505,256886,257140,257395,257395,257906,258416,258927,259435,259948,260458,260969,261473,261990,262504,263019,263527,264044,264554,265065,265561,266086,266608,267131,267647,268172,268690,269209,269713,270242,270764,271287,271795,272320,272830,273341,273821,274362,274900,275439,275971,276512,277046,277581,278101,278646,279184,279723,280247,280788,281314,281841,282337,282890,283436,283983,284515,285064,285598,286133,286637,287190,287728,288267,288775,289316,289826,290337,290785,291358,291928,292499,293063,293636,294202,294769,295321,295898,296468,297039,297595,298168,298726,299285,299813,300398,300976,301555,302119,302700,303266,303833,304369,304954,305524,306095,306635,307208,307750,308293,308773,309374,309968,310563,311143,311740,312322,312905,313457,314058,314644,315231,315787,316376,316934,317493,317989,318598,319192,319787,320351,320948,321514,322081,322585,323186,323756,324327,324835,325408,325918,326429,326813,327450,328084,328719,329347,329984,330614,331245,331861,332502,333136,333771,334391,335028,335650,336273,336865,337514,338156,338799,339427,340072,340702,341333,341933,342582,343216,343851,344455,345092,345698,346305,346849,347514,348172,348831,349475,350136,350782,351429,352045,352710,353360,354011,354631,355284,355906,356529,357089,357762,358420,359079,359707,360368,360998,361629,362197,362862,363496,364131,364703,365340,365914,366489,366937,367634,368324,369015,369691,370384,371062,371741,372389,373086,373768,374451,375103,375788,376442,377097,377689,378394,379084,379775,380435,381128,381790,382453,383053,383750,384416,385083,385687,386356,386962,387569,388049,388770,389476,390183,390859,391568,392246,392925,393541,394254,394936,395619,396239,396924,397546,398169,398665,399386,400076,400767,401395,402088,402718,403349,403853,404550,405184,405819,406327,406964,407474,407985,408241,409006,409768,410531,411287,412052,412810,413569,414313,415082,415844,416607,417355,418120,418870,419621,420341,421118,421888,422659,423415,424188,424946,425705,426433,427210,427972,428735,429467,430232,430966,431701,432373,433166,433952,434739,435511,436300,437074,437849,438593,439386,440164,440943,441691,442472,443222,443973,444661,445462,446248,447035,447791,448580,449338,450097,450793,451586,452348,453111,453811,454576,455278,455981,456557,457382,458200,459019,459823,460644,461450,462257,463033,463858,464668,465479,466259,467072,467854,468637,469357,470190,471008,471827,472615,473436,474226,475017,475745,476570,477364,478159,478891,479688,480422,481157,481765,482614,483448,484283,485087,485924,486730,487537,488281,489122,489932,490743,491491,492304,493054,493805,494429,495278,496096,496915,497671,498492,499250,500009,500641,501466,502228,502991,503627,504392,505030,505669,506053,506942,507824,508707,509575,510460,511330,512201,513041,513930,514804,515679,516523,517400,518246,519093,519877,520774,521656,522539,523391,524276,525130,525985,526777,527666,528524,529383,530179,531040,531838,532637,533309,534222,535120,536019,536887,537788,538658,539529,540337,541242,542116,542991,543803,544680,545494,546309,546997,547910,548792,549675,550495,551380,552202,553025,553721,554610,555436,556263,556963,557792,558494,559197,559645,560590,561520,562451,563351,564284,565186,566089,566929,567866,568772,569679,570523,571432,572278,573125,573845,574790,575704,576619,577471,578388,579242,580097,580825,581746,582604,583463,584195,585056,585790,586525,587005,587966,588896,589827,590695,591628,592498,593369,594113,595050,595924,596799,597547,598424,599174,599925,600421,601366,602248,603131,603887,604772,605530,606289,606793,607682,608444,609207,609715,610480,610990,611501,611501,611501,611501,611502,611502,611505,611507,611510,611510,611517,611523,611530,611534,611543,611549,611556,611556,611571,611585,611600,611612,611629,611643,611658,611666,611687,611705,611724,611736,611757,611771,611786,611786,611817,611847,611878,611906,611939,611969,612000,612024,612061,612095,612130,612158,612195,612225,612256,612272,612317,612359,612402,612438,612483,612521,612560,612584,612633,612675,612718,612746,612791,612821,612852,612852,612915,612977,613040,613100,613165,613227,613290,613346,613415,613481,613548,613608,613677,613739,613802,613850,613927,614001,614076,614144,614221,614291,614362,614418,614499,614573,614648,614708,614785,614847,614910,614942,615035,615125,615216,615300,615393,615479,615566,615638,615735,615825,615916,615992,616085,616163,616242,616290,616395,616493,616592,616676,616777,616863,616950,617006,617111,617201,617292,617352,617445,617507,617570,617570,617697,617823,617950,618074,618203,618329,618456,618576,618709,618839,618970,619094,619227,619353,619480,619592,619733,619871,620010,620142,620283,620417,620552,620672,620817,620955,621094,621218,621359,621485,621612,621708,621865,622019,622174,622322,622479,622629,622780,622916,623077,623231,623386,623526,623683,623825,623968,624080,624249,624411,624574,624722,624887,625037,625188,625308,625477,625631,625786,625910,626067,626193,626320,626384,626573,626759,626946,627126,627315,627497,627680,627848,628041,628227,628414,628586,628775,628949,629124,629268,629469,629663,629858,630038,630235,630417,630600,630752,630953,631139,631326,631482,631671,631829,631988,632084,632301,632511,632722,632918,633131,633329,633528,633696,633913,634115,634318,634490,634695,634869,635044,635156,635381,635591,635802,635982,636195,636377,636560,636680,636897,637083,637270,637394,637583,637709,637836,637836,638091,638345,638600,638852,639109,639363,639618,639866,640127,640385,640644,640896,641157,641411,641666,641906,642175,642441,642708,642968,643237,643499,643762,644010,644283,644549,644816,645068,645337,645591,645846,646070,646355,646637,646920,647196,647481,647759,648038,648302,648591,648873,649156,649424,649709,649979,650250,650490,650787,651077,651368,651644,651937,652215,652494,652742,653039,653321,653604,653856,654141,654395,654650,654842,655159,655473,655788,656096,656413,656723,657034,657330,657651,657965,658280,658580,658897,659199,659502,659774,660103,660425,660748,661056,661381,661691,662002,662282,662611,662925,663240,663524,663841,664127,664414,664638,664983,665321,665660,665984,666325,666651,666978,667274,667619,667949,668280,668580,668913,669215,669518,669758,670111,670449,670788,671096,671437,671747,672058,672306,672651,672965,673280,673532,673849,674103,674358,674486,674867,675245,675624,675996,676377,676751,677126,677486,677871,678249,678628,678992,679373,679739,680106,680442,680835,681221,681608,681980,682369,682743,683118,683462,683855,684233,684612,684960,685341,685691,686042,686330,686739,687141,687544,687932,688337,688727,689118,689478,689887,690281,690676,691040,691437,691803,692170,692474,692891,693293,693696,694068,694473,694847,695222,695534,695943,696321,696700,697016,697397,697715,698034,698226,698667,699101,699536,699956,700393};
    cout << arr[n];
    
    return 0;
}
