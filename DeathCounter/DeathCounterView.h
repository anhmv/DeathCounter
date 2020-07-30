//
//  DeathCounterView.h
//  DeathCounter
//
//  Created by Mac Van Anh on 7/23/20.
//  Copyright © 2020 Mac Van Anh. All rights reserved.
//

#import <ScreenSaver/ScreenSaver.h>
#import "SectionView.h"

@interface DeathCounterView : ScreenSaverView {
    SectionView *daysView;
    SectionView *hoursView;
    SectionView *minutesView;
    SectionView *secondsView;
    
    NSStackView *stackView;

    IBOutlet id configSheet;
    IBOutlet NSTextField *birthday;
    IBOutlet NSTextField *expectedDeathAge;
    IBOutlet NSButton *hideLabels;
    
    NSDate *userBirthday;
    NSDate *userDeathDate;
    NSControlStateValue userHideLabels;
}
@end
