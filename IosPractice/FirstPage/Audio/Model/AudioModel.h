//
//  AudioModel.h
//  IosPractice
//
//  Created by ltl on 2019/10/9.
//  Copyright © 2019 Yin. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AudioModel : NSObject

@property(nonatomic, strong) NSMutableArray * functionArray;
@property(nonatomic, strong) NSMutableArray * songListArray;

- (void)modelInit;



@end

NS_ASSUME_NONNULL_END

