//
//  AppearancesPreferences.h
//  Vienna
//
//  Created by Steve on 10/15/05.
//  Copyright (c) 2004-2005 Steve Palmer. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Cocoa/Cocoa.h>

@interface AppearancesPreferences : NSWindowController
{
	IBOutlet NSTextField * articleFontSample;
	IBOutlet NSTextField * folderFontSample;
	IBOutlet NSButton * articleFontSelectButton;
	IBOutlet NSButton * folderFontSelectButton;
	IBOutlet NSComboBox * minimumFontSizes;
	IBOutlet NSButton * enableMinimumFontSize;
	IBOutlet NSButton * showFolderImagesButton;
}

// Action functions
-(IBAction)selectArticleFont:(id)sender;
-(IBAction)selectFolderFont:(id)sender;
-(IBAction)changeMinimumFontSize:(id)sender;
-(IBAction)changeShowFolderImages:(id)sender;
-(IBAction)selectMinimumFontSize:(id)sender;
@end