//
//  EJFormatPhoneTF.h
//  EJiangOSbeta
//
//  Created by ejiang on 2020/1/8.
//  Copyright © 2020 Joyssom. All rights reserved.
//

#import <UIKit/UIKit.h>

//NS_ASSUME_NONNULL_BEGIN

@interface EJFormatPhoneTF : UITextField

- (BOOL)valueChangeValueString:(NSString *)string shouldChangeCharactersInRange:(NSRange)range;

/// 有效内容
@property (nonatomic, copy) NSString * effectText;

@end

//NS_ASSUME_NONNULL_END
