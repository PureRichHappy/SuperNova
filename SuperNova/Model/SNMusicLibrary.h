//
//  SNMusicLibrary.h
//  SuperNova
//
//  Created by 清 貴幸 on 2013/12/21.
//  Copyright (c) 2013年 清 貴幸. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MediaPlayer/MediaPlayer.h>

@interface SNMusicLibrary : NSObject

@property (nonatomic, strong) NSArray *artists;
@property (nonatomic, strong) NSArray *albums;

- (NSArray *)getArtistsByLibrary;

@end
