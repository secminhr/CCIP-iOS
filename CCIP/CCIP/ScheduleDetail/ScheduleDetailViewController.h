//
//  ScheduleDetailViewController.h
//  CCIP
//
//  Created by 腹黒い茶 on 2017/07/21.
//  Copyright © 2017年 CPRTeam. All rights reserved.
//

#import <UIKit/UIKit.h>

#define SCHEDULE_DETAIL_VIEW_STORYBOARD_ID  (@"ShowScheduleDetail")

@interface ScheduleDetailViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIView *vwHeader;
@property (weak, nonatomic) IBOutlet UIView *vwMeta;
@property (weak, nonatomic) IBOutlet UIScrollView *svContent;
@property (weak, nonatomic) IBOutlet UIImageView *ivSpeakerPhoto;
@property (weak, nonatomic) IBOutlet UILabel *lbSpeaker;
@property (weak, nonatomic) IBOutlet UILabel *lbSpeakerName;
@property (weak, nonatomic) IBOutlet UILabel *lbTitle;
@property (weak, nonatomic) IBOutlet UILabel *lbRoom;
@property (weak, nonatomic) IBOutlet UILabel *lbRoomText;
@property (weak, nonatomic) IBOutlet UILabel *lbLang;
@property (weak, nonatomic) IBOutlet UILabel *lbLangText;
@property (weak, nonatomic) IBOutlet UILabel *lbTime;
@property (weak, nonatomic) IBOutlet UILabel *lbTimeText;
@property (weak, nonatomic) IBOutlet UIView *cvAbstract;
@property (weak, nonatomic) IBOutlet UIView *cvSpeakerInfo;

- (void)setDetailData:(NSDictionary *)data;

@end
