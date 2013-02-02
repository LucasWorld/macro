//release屏蔽NSLog,放在.pch文件里
#ifdef DEBUG
#else
#define NSLog(...) {};
#endif
//Device
#define isRetina ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)
#define isPad (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
//区分模拟器和真机
#if TARGET_OS_IPHONE
//iPhone Device
#endif

#if TARGET_IPHONE_SIMULATOR
//iPhone Simulator
#endif

//ARC
#if __has_feature(objc_arc)
    //compiling with ARC
#else
    // compiling without ARC
#endif

#define NavigationBar_HEIGHT 44 
#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width) 
#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height) 
#define SAFE_RELEASE(x) [x release];x=nil 
#define IOS_VERSION [[[UIDevice currentDevice] systemVersion] floatValue] 
#define CurrentSystemVersion ([[UIDevice currentDevice] systemVersion]) 
#define CurrentLanguage ([[NSLocale preferredLanguages] objectAtIndex:0]) 
#define BACKGROUND_COLOR [UIColor colorWithRed:242.0/255.0 green:236.0/255.0 blue:231.0/255.0 alpha:1.0] 


// For text, messages, etc
#define DEFAULT_FONTSIZE    15
#define DEFAULT_FONT(s)     [UIFont fontWithName:@"ArialMT" size:s]
#define DEFAULT_BOLDFONT(s) [UIFont fontWithName:@"Arial-BoldMT" size:s]
 
// For table cells
#define CELL_FONTSIZE    16
#define CELL_FONT(s)     [UIFont fontWithName:@"Helvetica-Oblique" size:s]
#define CELL_BOLDFONT(s) [UIFont fontWithName:@"Helvetica-BoldOblique" size:s]

#define USER_DEFAULT [NSUserDefaults standardUserDefaults]
#define ImageNamed(_pointer) [UIImage imageNamed:[UIUtil imageName:_pointer]]
#define LOADIMAGE(name,tpye) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle]pathForResource:name ofType:tpye]]